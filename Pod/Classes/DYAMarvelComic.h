//
//  DYAMarvelComic.h
//  Pods
//
//  Created by David Yang on 30/06/2015.
//
//

#import "DYAMarvelModel.h"

#import "DYAMarvelURL.h"
#import "DYAMarvelSeriesSummary.h"
#import "DYAMarvelComicSummary.h"
#import "DYAMarvelImage.h"
#import "DYAMarvelStoryList.h"
#import "DYAMarvelEventList.h"
#import "DYAMarvelTextObject.h"
#import "DYAMarvelComicDate.h"
#import "DYAMarvelComicPrice.h"
#import "DYAMarvelCharacterList.h"
#import "DYAMarvelCreatorList.h"

@protocol DYAMarvelComic
@end

@interface DYAMarvelComic : DYAMarvelModel

@property (assign, nonatomic) NSInteger identifier;
@property (assign, nonatomic) NSInteger digitalId;
@property (strong, nonatomic) NSString *title;
@property (assign, nonatomic) double issueNumber;
@property (strong, nonatomic) NSString *variantDescription;
@property (strong, nonatomic) NSString *shortDescription;
@property (strong, nonatomic) NSDate *modified;
@property (strong, nonatomic) NSString *isbn;
@property (strong, nonatomic) NSString *upc;
@property (strong, nonatomic) NSString *diamondCode;
@property (strong, nonatomic) NSString *ean;
@property (strong, nonatomic) NSString *issn;
@property (strong, nonatomic) NSString *format;
@property (assign, nonatomic) NSInteger pageCount;
@property (strong, nonatomic) NSArray<DYAMarvelTextObject> *textObjects;
@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSArray<DYAMarvelURL> *urls;
@property (strong, nonatomic) DYAMarvelSeriesSummary *series;
@property (strong, nonatomic) NSArray<DYAMarvelComicSummary> *variants;
@property (strong, nonatomic) NSArray<DYAMarvelComicSummary> *collections;
@property (strong, nonatomic) NSArray<DYAMarvelComicSummary> *collectedIssues;
@property (strong, nonatomic) NSArray<DYAMarvelComicDate> *dates;
@property (strong, nonatomic) NSArray<DYAMarvelComicPrice> *prices;
@property (strong, nonatomic) DYAMarvelImage *thumbnail;
@property (strong, nonatomic) NSArray<DYAMarvelImage> *images;
@property (strong, nonatomic) DYAMarvelCreatorList *creators;
@property (strong, nonatomic) DYAMarvelCharacterList *characters;
@property (strong, nonatomic) DYAMarvelStoryList *stories;
@property (strong, nonatomic) DYAMarvelEventList *events;

@end
