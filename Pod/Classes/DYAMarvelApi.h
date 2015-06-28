//
//  DYAMarvelApi.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

#import "DYAMarvelResponse.h"

@interface DYAMarvelApi : AFHTTPRequestOperationManager

@property (strong, nonatomic) NSString *apiKey;
@property (strong, nonatomic) NSString *headerReferer;

+ (instancetype)sharedApi;

- (void)getCharacterWithId:(NSString *)characterId success:(void (^)(DYAMarvelResponse *response))success failure:(void(^)(NSError *error))failure;

@end
