//
//  DYAMarvelSeriesSummary.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <JSONModel/JSONModel.h>

@protocol DYAMarvelSeriesSummary
@end

@interface DYAMarvelSeriesSummary : JSONModel

@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSString *name;

@end
