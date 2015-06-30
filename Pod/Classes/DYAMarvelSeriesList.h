//
//  DYAMarvelSeriesList.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

#import "DYAMarvelSeriesSummary.h"

@interface DYAMarvelSeriesList : DYAMarvelModel

@property (assign, nonatomic) NSInteger available;
@property (assign, nonatomic) NSInteger returned;
@property (strong, nonatomic) NSString *collectionURI;
@property (strong, nonatomic) NSArray<DYAMarvelSeriesSummary> *items;

@end
