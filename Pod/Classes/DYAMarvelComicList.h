//
//  DYAMarvelComicList.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <JSONModel/JSONModel.h>
#import "DYAMarvelComicSummary.h"

@interface DYAMarvelComicList : JSONModel

@property (assign, nonatomic) NSInteger available;
@property (assign, nonatomic) NSInteger returned;
@property (strong, nonatomic) NSString *collectionURI;
@property (strong, nonatomic) NSArray<DYAMarvelComicSummary> *items;

@end
