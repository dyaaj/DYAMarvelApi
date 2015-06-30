//
//  DYAMarvelResponse.m
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelResponse.h"

#import "DYAMarvelCharacterDataContainer.h"

@interface NSDictionary (DYAMarvelAdditions)
- (NSDictionary *)dictionaryByRemovingObjectWithKey:(NSString *)key;
@end
@implementation NSDictionary (DYAMarvelAdditions)
- (NSDictionary *)dictionaryByRemovingObjectWithKey:(NSString *)key {
    NSMutableDictionary *dic = [self mutableCopy];
    [dic removeObjectForKey:key];
    return [NSDictionary dictionaryWithDictionary:dic];
}
@end

@implementation DYAMarvelResponse

- (instancetype)initWithDictionary:(NSDictionary *)dict requestType:(DYAMarvelRequestType)requestType error:(NSError *__autoreleasing *)err {
    self = [super initWithDictionary:[dict dictionaryByRemovingObjectWithKey:@"data"] error:err];
    if (self) {
        Class class = [self dataContainerClassForRequestType:requestType];
        self.data = [[class alloc] initWithDictionary:[dict objectForKey:@"data"] error:err];
    }
    return self;
}

- (Class)dataContainerClassForRequestType:(DYAMarvelRequestType)requestType {
    Class returnClass;
    switch (requestType) {
        case DYAMarvelRequestTypeCharacter:
        {
            returnClass = NSClassFromString(@"DYAMarvelCharacterDataContainer");
        }
            break;
        case DYAMarvelRequestTypeComic:
        {
			returnClass = NSClassFromString(@"DYAMarvelComicDataContainer");
        }
            break;
        case DYAMarvelRequestTypeCreator:
        {
            NSLog(@"request type to implement");
        }
            break;
        case DYAMarvelRequestTypeEvent:
        {
            NSLog(@"request type to implement");
        }
            break;
        case DYAMarvelRequestTypeSerie:
        {
            NSLog(@"request type to implement");
        }
            break;
        case DYAMarvelRequestTypeStory:
        {
            NSLog(@"request type to implement");
        }
            break;
        default:
        {
            returnClass = NSClassFromString(@"DYAMarvelDataContainer");
        }
            break;
    }
    return returnClass;
}

@end
