//
//  DYAMarvelCreatorList.h
//  Pods
//
//  Created by David Yang on 30/06/2015.
//
//

#import "DYAMarvelModel.h"

#import "DYAMarvelCreatorSummary.h"

@interface DYAMarvelCreatorList : DYAMarvelModel

@property (assign, nonatomic) NSInteger available;
@property (assign, nonatomic) NSInteger returned;
@property (strong, nonatomic) NSString *collectionURI;
@property (strong, nonatomic) NSArray<DYAMarvelCreatorSummary> *items;

@end
