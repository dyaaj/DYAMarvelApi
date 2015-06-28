//
//  DYAMarvelEventList.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <JSONModel/JSONModel.h>
#import "DYAMarvelEventSummary.h"

@interface DYAMarvelEventList : JSONModel

@property (assign, nonatomic) NSInteger available;
@property (assign, nonatomic) NSInteger returned;
@property (strong, nonatomic) NSString *collectionURI;
@property (strong, nonatomic) NSArray<DYAMarvelEventSummary> *items;

@end
