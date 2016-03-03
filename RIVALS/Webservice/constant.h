//
//  constant.h
//  Storyboard
//
//  Created by Sanjay Kumar on 31/03/14.
//  Copyright (c) 2014 Sanjay Kumar. All rights reserved.
//
//
//
//#import "GAI.h"
//#import "GAIFields.h"
#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define CORNER_RADIUS  5.0
#define NAVIGATION_BAR_IMAGE  [UIImage imageNamed:@"navigation_bg@2x.png"]
#define NAVIGATION_BACK_BTN   [UIImage imageNamed:@"back_arrow.png"]
#define HEIGHT      [[UIScreen mainScreen]bounds].size.height
#define WIDTH       [[UIScreen mainScreen]bounds].size.width
#define X           [[UIScreen mainScreen]bounds].origin.x
#define Y           [[UIScreen mainScreen]bounds].origin.y


#define IS_IPHONE_4 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )480 ) < DBL_EPSILON )
#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )
#define IS_IPHONE_6 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )667 ) < DBL_EPSILON )
#define IS_IPHONE_6Plus ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )960 ) < DBL_EPSILON )

#define _RELEASE(x)   if(x != nil){[x release]; x = nil;}

#pragma mark- ------------------------- System Version -----------------------------

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)


#define kdays @"Days"
#define Khours @"Hours"
#define Kminutes @"Minutes"
#define kplayerOneName @"Playerone"
#define kplayerTwoName @"Playertwo"
#define kacceptorName @"acceptorName"
#define KchallengeId @"challendID"
#define kchallenge @"challenger_text"
#define kstate @"isActive"
#define kchallengerName @"challengerName"
#define kImage_Challenger @"Image_Challenger"
#define kImage_Playerone @"Image_Playerone"
#define kImage_Playertwo @"Image_Playertwo"

#define kLoasderHeight HEIGHT
#define KLoaderWidth WIDTH
#pragma font name

#define FONT_CALIBRI    @"Calibri-Light"
#define FONT_CALIBRIBOLD    @"Calibri-Bold"
#define FONT_HELVETICABOLD @"Helvetica-Bold"

#define KISLOGIN    @"isLogin"
#define KFIRSTTIME  @"isfirstime"
#define KOption @"Option"

#define KUSERDATA     @"UserData"
#define KDEVICETOKEN  @"DeviceToken"
#define KISINAPPPURCHASED @"IsInAppPurchased"
#define KWEEKLYIMAGE @"WeeklyImage"
#define ALERT_TITLE @"Please provide title of post."
#define ALERT_DESCRIPTION @"Please provide description of post."
#define ALERT_POSTTYPE @"Please provide post type."
#define ALERT_PHONENO @"Please provide valid Mobile Number"
#define ALERT_NAME @"Please provide Name"
#define ALERT_USERNAME @"Please provide UserName"
#define ALERT_EMAIL @"Please provide Email"
#define ALERT_FIRSTNAME @"Please enter First Name!"
#define ALERT_AGE @"Please enter your Age!"
#define ALERT_LASTNAME @"Please enter Last Name!"
#define ALERT_GENDER @"Please enter your Gender!"
#define ALERT_BIRTHDATE @"Please enter Birth Date!"
#define ALERT_EMAILVALID @"Please enter valid Email Id!"

#define ALERT_PASSWORD @"Please provide Password"
#define ALERT_PASSWORD_LENGTH @"Password length should be 6 to 10 characters only!"

#define ALERT_PASSWORDMISMATCH @"Password and Confirm Password fields does not match"
#define ALERT_CONFIRMPASSWORD @"Please provide Confrim Password!"
#define ALERT_TYPEUSERNAME_PASSWORD @"Please type in your Username and Password!"
#define ALERT_TERMS @"Please select Terms & Conditions!"
#define ALERT_ALLFIELDS @"All fields are mandatory!"
#define AlERT_ATLEAST @"Please select at least one field!"
#define ALERT_PICTURE @"Please select your Profile Picture"
#define ALERT_GROUPNAME @"Please Enter Group Name!"
#define ALERT_GROUPDURATION @"Please Select Time Duration!"
#define ALERT_CONNECT @"Please select Connect through!"
#define ALERT_INVITE @"Please select at least one user!"
#define ALERT_INSERTGROUP @"Please Enter your Goal!"
#define ALERT_IMAGE @"Please select Image!"
#define ALERT_LOGOUT @"Do you want to Logout?"
#define ALERT_NETWORK @"Check your internet connection!"
#define ALERT_INVITATION @"Invitation has been sent successfully!"
#define ALERT_POSTDATA @"Please Enter at least one field! "
#define ALERT_OVERALL @"Please Enter Overall Result !"
#define ALERT_CODE @"Please Enter Access Code !"
#define POST_FEED @"Feed"
#define POST_CONVERSATION @"Conversation"
#define GROUP_ALERT @"Groupalert"
#define PUSH_NOTIFICATION @"PushNotification"
#define PANNIC_NOTIFICATION @"Panic"
#define PUSH_NOTIFICATION_HASTAGLIKED  @"HASTAGLIKED"
#define UPDATE_WEEKLYINFO @"updateWeeklyInfo"
#define REFRESH_ACTIVITYSCREEN @"refreshActivity"
#define REFRESH_NOTIFICATIONSCREEN @"refreshNotification"
#define REFRESH_NOTIFICATIONSCREENWHILELOGIN @"refreshNotificationForLogin"
#define KRemoveSlide_NOTIFICATION @"removeslider"
#define KUpperBanner @"ca-app-pub-4776437692940406/5849932570"
#define KLowerBanner @"ca-app-pub-4776437692940406/7326665772"

#define pickImageArray  [[NSArray alloc] initWithObjects:@"Camera",@"CameraRoll",@"Cancel",nil]

#pragma mark- Notification

#define CALENDER_DATE       @"calender_Date"
#define CALENDER_OPTION     @"NoteFromButtons"
#define SEARCH_BAR_CALENDER @"SearchBar"
#define PAYMENT_INFO        @"paymentInfo"
#define LOCATION_ERROR      @"locationServicesError"
#define SEND_GIFT_CARD      @"sendGiftCard"

//Event Detail Page
#define POST_CHATTER        @"PostChatter"




#pragma mark- Login userDefualts

#define ISLOGIN             @"is_Login"
#define USER_EMAIL          @"Email"
#define USER_ID             @"ID"
#define USER_NAME           @"UserName"
#define PASSWORD            @"Password"
#define USER_IMAGE          @"UserImage.jpg"

#pragma mark- Webservice

#define TIMEZONE             @"TimeZone"
#define DATA                 @"Data"
#define STATUS               @"Status"

#pragma mark- City

#define IS_CURRENT_LOCATION @"isCurrentLocation"
#define CURRENT_STATE       @"currentState"
#define CURRENT_COUNTRY     @"currentCountry"
#define MYLOCATION          @"myLocation"
#define SELECTED_CITY       @"selectedCity"
#define SELECTED_STATE      @"selectedState"
#define CURRENT_CITY        @"currentCity"
#define CITYNAME            @"CityName"
#define STATENAME           @"StateName"
#define STATE_CODE          @"StateCode"
#define SELECTED_DATE       @"selectedDate"

#pragma mark- Band

#define USER_FRIEND_DETAIL      @"user Friend Detail"
#define BAND_LIKE_DETAIL        @"Band Like Detail"
#define BAND_SONG_URL           @"SongFileName"
#define BAND_SONG_NAME          @"SongName"
#define BAND_SONG_TITLE         @"SongTitle"
#define BAND_PHOTOS_URL         @"FourPhotoURL"
#define BAND_PHOTO_ORDER        @"PhotoOrder"
#define BAND_CONTENT_LISTING    @"ContentHeaderListingPhoto"
#define BAND_CONTENT_PHOTO      @"ContentPhoto"
#define BAND_SHOWS              @"BandShows"
#define BAND_AUDIO              @"BandAudio"
#define BAND_ARTIST_NAME        @"BandArtistName"
#define BAND_BOOKING_EMAIL      @"BandBookingEmail"
#define BAND_CONTACT_PERSON     @"BandContactPerson"
#define BAND_EMAIL              @"BandEmail"
#define BAND_WEB_LINK           @"BandWeblink"
#define BAND_ZIP_CODE           @"BandZipCode"
#define BAND_CITY               @"City"
#define BAND_COUNTRY            @"Country"
#define BAND_CREATED_DATE       @"CreatedDate"
#define BAND_PERSON_EMAIL       @"Email"
#define BAND_PERSON_FIRSTNAME   @"FirstName"
#define BAND_FOLLOWING_COUNT    @"NoOfAttendees"
#define BAND_GENRE              @"Genre"
#define BAND_ID                 @"ID"
#define BAND_ISACTIVE           @"IsActive"
#define BAND_PERSON_LASTNAME    @"LastName"
#define BAND_STATE              @"State"
#define BAND_STATE_CODE         @"StateCode"
#define BAND_SHOWFLAG           @"ShowFlag"
#define BAND_HEADER_PHOTO_NAME  @"HeaderPhotoName"
#define BAND_LISTING_PHOTO_NAME @"ListingPhotoName"
#define BAND_ABOUT              @"About"
#define BAND_PEEP_ID            @"PeepUserID"
#define BAND_PEEP_COUNT         @"PeepCount"
#define BAND_PEEP               @"Peep"
#define BAND_SHOWDATE           @"ShowDate"

#pragma mark- Event

#define EVENT_BANDID            @"BandID"
#define EVENT_MERCHANT_LINK     @"BandOrMerchantLink"
#define EVENT_CITY              @"City"
#define EVENT_COST              @"Cost"
#define EVENT_CREATED_DATE      @"CreatedDate"
#define EVENT_END_DATE          @"EndDate"
#define EVENT_INFO              @"EventInfo"
#define EVENT_FEATURED_EVENT    @"FeaturedEvent"
#define EVENT_OFFER             @"offer"
#define EVENT_FREE              @"Free"
#define EVENT_ID                @"EventID"
#define EVENT_LOCATION          @"Location"
#define EVENT_MERCHANTID        @"MerchantID"
#define EVENT_PAGE_VIEW         @"PageView"
#define EVENT_PHOTO_NAME        @"ListingPhotoName"
#define EVENT_PUBLISH_DATE      @"PublishDate"
#define EVENT_PUBLISH_TIME      @"PublishTime"
#define EVENT_RSVP              @"RSVP"
#define EVENT_REPEAT            @"Repeat"
#define EVENT_START_DATE        @"StartDate"
#define EVENT_STATE             @"State"
#define EVENT_TITLE             @"Title"
#define EVENT_TITLE_PHOTO_NAME  @"HeaderPhotoName"
#define EVENT_SCHEDULE          @"SubEvent"
#define EVENT_START_TIME        @"StartTime"
#define EVENT_END_TIME          @"EndTime"
#define EVENT_COUNT_LIKE        @"EventLikeCount"
#define EVENT_MERCHANT_NAME     @"MerchantName"
#define EVENT_TOTAL_FOLLOWING_COUNT @"TotalFollowing"
#define EVENT_MERCHANT_ID       @"MerchantID"

#pragma mark- Band Shows

#define BAND_SHOW_HEADER_PHOTO_NAME                 @"HeaderPhotoName"
#define BAND_SHOW_LISTING_PHOTO_NAME                @"ListingPhotoName"
#define BAND_SHOW_PUBLISH_DATE                      @"PublishDate"
#define BAND_SHOW_PUBLISH_TIME                      @"PublishTime"
#define BAND_SHOW_PUBLISH_TIME_DAY                  @"Days"
#define BAND_SHOW_PUBLISH_TIME_HOURS                @"Hours"
#define BAND_SHOW_PUBLISH_TIME_MINUTES              @"Minutes"
#define BAND_SHOW_PUBLISH_TIME_SECONDS              @"Seconds"
#define BAND_SHOW_DATE                              @"ShowDate"
#define BAND_SHOW_ID                                @"ShowID"
#define BAND_SHOW_INFO                              @"ShowInfo"
#define BAND_SHOW_START_TIME                        @"StartTime"
#define BAND_SHOW_START_TIME_TIME_DAY               @"Days"
#define BAND_SHOW_START_TIME_TIME_HOURS             @"Hours"
#define BAND_SHOW_START_TIME_TIME_MINUTES           @"Minutes"
#define BAND_SHOW_START_TIME_TIME_SECONDS           @"Seconds"
#define BAND_SHOW_TEACHER_INSTRUCTOR                @"TeacherInstructor"
#define BAND_SHOW_TITLE                             @"Title"
#define BAND_SHOW_COST                              @"Cost"
#define BAND_SHOW_IS_FREE                           @"isFree"
#define BAND_SHOW_LOCATION                          @"Location"
#define BAND_DESCRIPTION                            @"Description"
#define BAND_END_TIME                               @"EndTime"
#define BAND_SHOW_ISLIKE                            @"IsShowlike"
#define BAND_SHOW_LIKECOUNT                         @"ShowPeepCount"

#pragma mark- News

#define NEWS_ADMIN_ID                       @"AdminID"
#define NEWS_BAND_ID                        @"BandID"
#define NEWS_DESCRIPTION                    @"Description"
#define NEWS_FEATURED_NEWS                  @"FeaturedNews"
#define NEWS_HEADLINE                       @"HeadLine"
#define NEWS_ID                             @"ID"
#define NEWS_MERCHANT_ID                    @"MerchantID"
#define NEWS_PHOTOURL                       @"ListingPhotoName"
#define NEWS_PUBLISH_DATE                   @"PublishDate"
#define NEWS_PUBLISH_TIME                   @"PublishTime"
#define NEWS_TITLE_PHOTO_URL                @"HeaderPhotoName"
#define NEWS_FIRST_NAME                     @"FirstName"
#define NEWS_LAST_NAME                      @"LastName"
#define NEWS_BDARTIST_NAME                  @"BDArtistName"

#pragma mark- Class

#define CLASS_TITLE                         @"Title"
#define CLASS_TITLE_PHOTO_NAME              @"TitlePhotoName"
#define CLASS_TEACHER                       @"TeacherInstructor"
#define CLASS_MERCHANT_LINK                 @"BandOrMerchantLink"
#define CLASS_STATE                         @"State"
#define CLASS_STARTDATE                     @"StartDate"
#define CLASS_STARTTIME                     @"StartTime"
#define CLASS_ENDTIME                       @"EndTime"
#define CLASS_REPEAT                        @"Repeat"
#define CLASS_PUBLISH_TIME                  @"PublishTime"
#define CLASS_PUBLIST_DATE                  @"PublishDate"
#define CLASS_PHOTO_NAME                    @"HeaderPhotoName"
#define CLASS_MERCHANT_ID                   @"MerchantID"
#define CLASS_LOCATION                      @"Location"
#define CLASS_ID                            @"ClassID"
#define CLASS_FREE                          @"Free"
#define CLASS_END_DATE                      @"EndDate"
#define CLASS_CREATED_DATE                  @"CreatedDate"
#define CLASS_COST                          @"Cost"
#define CLASS_INFO                          @"ClassInfo"
#define CLASS_CITY                          @"City"
#define CLASS_CANCEL                        @"Cancel"
#define CLASS_LIKE_COUNT                    @"ClassLikeCount"
#define CLASS_OFFER                         @"offer"
#define CLASS_MERCHANT_NAME                 @"MerchantName"
#define CLASS_TOTAL_FOLLOWING_COUNT         @"TotalFollowing"

#pragma mark- Chatter

#define MESSAGE                             @"Message"
#define USER_NAME                           @"UserName"
#define NO_OF_STARS                         @"NoOfStars"
#define PHOTO_URL                           @"PhotoUrl"
#define CREATED_DATE                        @"CreatedDate"
#define PASSWORD                            @"Password"

#pragma mark- Contact

#define PEEP_ONLINE             @"Peeps"
#define PEEP_OFFLINE            @"Off Lines"
#define CONTACT_EMAIL           @"Email"
#define CONTACT_USERNAME        @"UserName"
#define CONTACT_ID              @"ID"
#define CONTACT_PHOTOURL        @"PhotoUrl"
#define CONTACT_USERDATA        @"UserData"

#pragma mark- Voucher

#define OFFER                               @"Offer"
#define VOUCHER_CREATED_DATE                @"CreatedDate"
#define VOUCHER_EXPIRES                     @"DoesVoucherExpire"
#define VOUCHER_ID                          @"ID"
#define VOUCHER_ITEM_PRICE                  @"ItemPrice"
#define VOUCHER_PHOTO                       @"PhotoName"
#define VOUCHER_PROMOTE_DATE                @"PromoteAtSpecificDate"
#define VOUCHER_PROMOTE_TIME                @"PromoteAtSpecificTime"
#define VOUCHER_EVENT_ID                    @"PromoteWithEventID"
#define VOUCHER_END_DATE                    @"PromotionEndDate"
#define VOUCHER_REGULAR_PRICE               @"RegularPrice"
#define VOUCHER_PHOTO_NAME                  @"TitlePhotoName"
#define VOUCHER_DETAIL                      @"VoucherDetails"
#define VOUCHER_EXPIRE_DATE                 @"VoucherExpireDate"
#define VOUCHER_ITEM                        @"VoucherItem"
#define VOUCHER_TITLE_PHOTO                 @"TitlePhotoName"
#define VOUCHER_MERCHANT_NAME               @"MerchantName"
#define VOUCHER_PURCHASED                   @"Purchased"
#define VOUCHER_USED_DATE                   @"VoucherUsedDate"
#define VOUCHER_TRANSACTION_NO              @"TransactionID"
#define VOUCHER_PURCHASE_DATE               @"PurchaseDate"

#pragma mark- Coupon

#define COUPON_AMOUNT           @"AmountOff"
#define COUPON_DETAIL           @"CouponDetails"
#define COUPON_EXPIRE_DATE      @"CouponExpireDate"
#define COUPON_ITEM             @"CouponItem"
#define IS_COUPON_LIMITED       @"NumberCouponLimited"
#define COUPON_CREATED_DATE     @"CreatedDate"
#define COUPON_ID               @"ID"
#define COUPON_MERCHANT_ID      @"MerchantID"
#define COUPON_MERCHANT_NAME    @"MerchantName"
#define COUPON_COUNT            @"CouponLimited"
#define COUPON_PHOTO            @"PhotoName"
#define COUPON_TITLE_PHOTO_NAME @"TitlePhotoName"
#define COUPON_PROMOTE_DATE     @"PromoteAtSpecificDate"
#define COUPON_PROMOTE_TIME     @"PromoteAtSpecificTime"
#define COUPON_PROMOTE_END_DATE @"PromotionEndDate"
#define COUPON_MERCHANT_CITY    @"MerchantCity"
#define COUPON_MERCHANT_COUNTRY @"MerchantCountry"
#define COUPON_MERCHANT_STATE   @"MerchantState"
#define COUPON_USED_DATE        @"CoupanUsedDate"


#pragma mark- GiftCard

#define GIFTCARD_DETAILS            @"GiftCardDetails"
#define GIFTCARD_LIMIT              @"GiftCardLimit"
#define GIFTCARD_ID                 @"GiftCardID"
#define GIFTCARD_PHOTONAME          @"PhotoName"
#define GIFTCARD_MERHANT_NAME       @"Merchantname"
#define GIFTCARD_MERHANT_ID         @"ID"
#define GIFTCARD_USED_DATE          @"GiftCardUsedDate"
#define GIFTCARD_SEND_DATE          @"GiftCardSendDate"
#define GIFTCARD_CREATED_DATE       @"CreatedDate"
#define GIFTCARD_PURCHASED_DATE     @"PurchaseDate"
#define GIFTCARD_TRANSACTION_NO     @"TransactionNo"
#define GIFT_CARD_NOTES             @"Notes"
#define GIFTCARD_MERCHANT_CITY      @"MerchantCity"
#define GIFTCARD_MERCHANT_STATE     @"MerchantState"
#define GIFTCARD_MERCHANT_COUNTRY   @"Country"
#define GIFTCARD_REDEEM_ID          @"RedeemedGiftcardID"

#pragma mark- Merchant

#define MERCHANT_DESC               @"Description"
#define MERCHANT_ABOUT              @"About"
#define BD_ARTIST_PERSON            @"BDArtistName"
#define BD_CONTACT_PERSON           @"BDContactPerson"
#define BD_PHONE                    @"BDPhone"
#define BD_PHONE_DISPLAY            @"BDPhoneDisplay"
#define BD_WEBLINK                  @"BDWebLink"
#define BD_EMAIL_ID                 @"BDEmail"
#define BD_STREET_ADDRESS           @"BDStreetAddress"
#define BD_SUITE_BLDG               @"BDSuiteBldg"
#define BD_ZIP_CODE                 @"BDZipCode"
#define MERCHANT_CITY               @"city"
#define MERCHANT_CREATED_DATE       @"CreatedDate"
#define MERCHANT_EMAIL              @"Email"
#define MERCHANT_FIRST_NAME         @"FirstName"
#define MERCHANT_IS_PREMIUM         @"IsPremiumUser"
#define MERCHANT_LAST_NAME          @"LastName"
#define MERCHANT_CODE               @"MerchantCode"
#define MERCHANT_STATE              @"State"
#define MERCHANT_TRANSACTION        @"TransactionDetails"
#define MERCHANT_CLASS_LIST         @"Class List"
#define MERCHANT_EVENT_LIST         @"EventList"
#define MERCHANT_WEBSITE            @"WebSiteLink"
#define MERCHANT_MONDAYTIME         @"MondayTime"
#define MERCHANT_TUESDAYTIME        @"TuesdayTime"
#define MERCHANT_WEDNESDAYTIME      @"WedensdayTime"
#define MERCHANT_THRUSDAYTIME       @"ThrusdayTime"
#define MERCHANT_FRIDAYTIME         @"FridayTime"
#define MERCHANT_SATURDAYTIME       @"SaturdayTime"
#define MERCHANT_SUNDAYTIME         @"SundayTime"
#define MERCHANT_BDZipCode          @"BDZipCode"
#define MERCHANT_BDStreetAddress    @"BDStreetAddress"
#define MERCHANT_PHONENUMBER        @"PhoneNumber"
#define MERCHANT_LIKE_COUNT         @"Merchantlikecount"
#define USER_FRIEND_COUNT           @"UserFriendLikeTotal"
#define MERCHANT_LISTING_PHOTO      @"ListingPhotoName"
#define MERCHANT_HEADER_PHOTO       @"HeaderPhotoName"
#define MERCHANT_IS_OFFER           @"offer"
#define TOTAL_NUMBEROFSTAR          @"TotalNumberOfStar"
#define TOTAL_CHATTER_COUNT         @"TotalstarRow"

#pragma mark- Payment Info

#define IS_STORE_PAYMENT            @"isStorePayment"
#define CREDIT_CARD_TYPE            @"creditCardType"
#define CARD_NUMBER                 @"cardNumber"
#define SECURITY_CODE               @"securityCode"
#define EXPIRES                     @"expires"
#define CARD_HOLDER_NAME            @"cardHolderName"
#define BILLING_COMPANY_NAME        @"billingCompanyName"
#define BILLING_ADDRESS             @"billingAddress"
#define BILLING_CITY                @"billingCity"
#define BILLING_STATE               @"billingState"
#define BILLING_ZIP                 @"billingZip"
#define BILLING_TELEPHONE           @"billingTelephone"
#define BILLING_COUNTRY             @"billingCountry"
#define IS_SHIPPING_SAME            @"isShippingSameAsBilling"
#define SHIPPING_FIRST_NAME         @"shippingFirstName"
#define SHIPPING_LAST_NAME          @"shippingLastName"
#define SHIPPING_COMPANY            @"shippingCompany"
#define SHIPPING_STREET_ADDRESS     @"shippingStreetAddress"
#define SHIPPING_APT_SUITE          @"shippingAptSuite"
#define SHIPPING_CITY               @"shippingCity"
#define SHIPPING_STATE              @"shippingState"
#define SHIPPING_ZIP                @"shippingZip"
#define SHIPPING_TELEPHONE          @"shippingTelephone"
#define SHIPPING_COUNTRY            @"shippingCountry"


#pragma mark- DownloadedImage

#define CACHE_IMAGE_URL         @"imageUrl"
#define CACHE_IMAGE_LOCAL_PATH  @"imageLocalPath"











