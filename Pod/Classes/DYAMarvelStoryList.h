//
//  DYAMarvelStoryList.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

#import "DYAMarvelStorySummary.h"

@interface DYAMarvelStoryList : DYAMarvelModel

@property (assign, nonatomic) NSInteger available;
@property (assign, nonatomic) NSInteger returned;
@property (strong, nonatomic) NSString *collectionURI;
@property (strong, nonatomic) NSArray<DYAMarvelStorySummary> *items;

@end
