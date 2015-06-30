//
//  DYAMarvelResponse.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <Foundation/Foundation.h>
#import "JSONModel/JSONModel.h"

#import "DYAMarvelDataContainer.h"

typedef NS_ENUM(NSInteger, DYAMarvelRequestType) {
    DYAMarvelRequestTypeCharacter,
    DYAMarvelRequestTypeComic,
    DYAMarvelRequestTypeCreator,
    DYAMarvelRequestTypeEvent,
    DYAMarvelRequestTypeSerie,
    DYAMarvelRequestTypeStory
};

@interface DYAMarvelResponse : DYAMarvelModel

@property (assign, nonatomic) NSInteger code;
@property (strong, nonatomic) NSString *status;
@property (strong, nonatomic) NSString *etag;

@property (strong, nonatomic) NSString *attributionHTML;
@property (strong, nonatomic) NSString *attributionText;
@property (strong, nonatomic) NSString *copyright;

@property (strong, nonatomic) DYAMarvelDataContainer<Optional> *data;

- (instancetype)initWithDictionary:(NSDictionary *)dict requestType:(DYAMarvelRequestType)requestType error:(NSError *__autoreleasing *)err;

@end
