//
//  DYAMarvelSeriesSummary.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelSeriesSummary
@end

@interface DYAMarvelSeriesSummary : DYAMarvelModel

@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSString *name;

@end
