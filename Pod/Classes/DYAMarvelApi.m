//
//  DYAMarvelApi.m
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelApi.h"

NSString *const DYAMarvelCharacterPath = @"/v1/public/characters/%@";
NSString *const DYAMarvelComicsForCharacterPath = @"/v1/public/characters/%@/comics";

@implementation DYAMarvelApi

+ (instancetype)sharedApi {
    static DYAMarvelApi *sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[DYAMarvelApi alloc] initWithBaseURL:[DYAMarvelApi baseURL]];
    });
    return sharedInstance;
}

+ (NSURL *)baseURL {
    return [NSURL URLWithString:@"http://gateway.marvel.com"];
}

- (void)setHeaderReferer:(NSString *)headerReferer {
    _headerReferer = headerReferer;
    [self setupReferer];
}

- (void)setupReferer {
    [self.requestSerializer setValue:self.headerReferer forHTTPHeaderField:@"Referer"];
}

- (NSDictionary *)defaultParameters {
    return @{@"apikey" : self.apiKey };
}

#pragma mark - Characters

- (void)getCharacterWithId:(NSString *)characterId success:(void (^)(DYAMarvelResponse *))success failure:(void(^)(NSError *))failure {
    NSString *pathString = [NSString stringWithFormat:DYAMarvelCharacterPath, characterId];
    [self GET:pathString parameters:[self defaultParameters] success:^(AFHTTPRequestOperation *operation, id responseObject) {
        NSError *error = nil;
        DYAMarvelResponse *response = [[DYAMarvelResponse alloc] initWithDictionary:responseObject requestType:DYAMarvelRequestTypeCharacter error:&error];
        if (error == nil) {
            success(response);
        } else {
            failure(error);
        }
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        failure(error);
    }];
}

- (void)getComicsForCharacterWithId:(NSString *)characterId success:(void (^)(DYAMarvelResponse *))success failure:(void (^)(NSError *))failure {
	NSString *pathString = [NSString stringWithFormat:DYAMarvelComicsForCharacterPath, characterId];
	[self GET:pathString parameters:[self defaultParameters] success:^(AFHTTPRequestOperation *operation, id responseObject) {
		NSError *error = nil;
		DYAMarvelResponse *response = [[DYAMarvelResponse alloc] initWithDictionary:responseObject requestType:DYAMarvelRequestTypeComic error:&error];
		if (error == nil) {
			success(response);
		} else {
			failure(error);
		}
	} failure:^(AFHTTPRequestOperation *operation, NSError *error) {
		failure(error);
	}];
}

@end
