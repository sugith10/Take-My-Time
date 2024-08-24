/*! @file OIDAuthorizationResponse.h
    @brief AppAuth iOS SDK
    @copyright
        Copyright 2015 Google Inc. All Rights Reserved.
    @copydetails
        Licensed under the Apache License, Version 2.0 (the "License");
        you may not use this file except in compliance with the License.
        You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

        Unless required by applicable law or agreed to in writing, software
        distributed under the License is distributed on an "AS IS" BASIS,
        WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
        See the License for the specific language governing permissions and
        limitations under the License.
 */

#import <Foundation/Foundation.h>

@class OIDAuthorizationRequest;
@class OIDTokenRequest;

NS_ASSUME_NONNULL_BEGIN

/*! @brief Represents the response to an authorization request.
    @see https://tools.ietf.org/html/rfc6749#section-4.1.2
    @see https://tools.ietf.org/html/rfc6749#section-5.1
    @see http://openid.net/specs/openid-connect-core-1_0.html#ImplicitAuthResponse
 */
@interface OIDAuthorizationResponse : NSObject <NSCopying, NSSecureCoding>

/*! @brief The request which was serviced.
 */
@property(nonatomic, readonly) OIDAuthorizationRequest *request;

/*! @brief The authorization code generated by the authorization server.
    @discussion Set when the response_type requested includes 'code'.
    @remarks code
 */
@property(nonatomic, readonly, nullable) NSString *authorizationCode;

/*! @brief REQUIRED if the "state" parameter was present in the client authorization request. The
        exact value received from the client.
    @remarks state
 */
@property(nonatomic, readonly, nullable) NSString *state;

/*! @brief The access token generated by the authorization server.
    @discussion Set when the response_type requested includes 'token'.
    @remarks access_token
    @see http://openid.net/specs/openid-connect-core-1_0.html#ImplicitAuthResponse
 */
@property(nonatomic, readonly, nullable) NSString *accessToken;

/*! @brief The approximate expiration date & time of the access token.
    @discussion Set when the response_type requested includes 'token'.
    @remarks expires_in
    @seealso OIDAuthorizationResponse.accessToken
    @see http://openid.net/specs/openid-connect-core-1_0.html#ImplicitAuthResponse
 */
@property(nonatomic, readonly, nullable) NSDate *accessTokenExpirationDate;

/*! @brief Typically "Bearer" when present. Otherwise, another token_type value that the Client has
        negotiated with the Authorization Server.
    @discussion Set when the response_type requested includes 'token'.
    @remarks token_type
    @see http://openid.net/specs/openid-connect-core-1_0.html#ImplicitAuthResponse
 */
@property(nonatomic, readonly, nullable) NSString *tokenType;

/*! @brief ID Token value associated with the authenticated session.
    @discussion Set when the response_type requested includes 'id_token'.
    @remarks id_token
    @see http://openid.net/specs/openid-connect-core-1_0.html#IDToken
    @see http://openid.net/specs/openid-connect-core-1_0.html#ImplicitAuthResponse
 */
@property(nonatomic, readonly, nullable) NSString *idToken;

/*! @brief The scope of the access token. OPTIONAL, if identical to the scopes requested, otherwise,
        REQUIRED.
    @remarks scope
    @see https://tools.ietf.org/html/rfc6749#section-5.1
 */
@property(nonatomic, readonly, nullable) NSString *scope;

/*! @brief Additional parameters returned from the authorization server.
 */
@property(nonatomic, readonly, nullable)
    NSDictionary<NSString *, NSObject<NSCopying> *> *additionalParameters;

/*! @internal
    @brief Unavailable. Please use initWithRequest:parameters:.
 */
- (instancetype)init NS_UNAVAILABLE;

/*! @brief Designated initializer.
    @param request The serviced request.
    @param parameters The decoded parameters returned from the Authorization Server.
    @remarks Known parameters are extracted from the @c parameters parameter and the normative
        properties are populated. Non-normative parameters are placed in the
        @c #additionalParameters dictionary.
 */
- (instancetype)initWithRequest:(OIDAuthorizationRequest *)request
    parameters:(NSDictionary<NSString *, NSObject<NSCopying> *> *)parameters
    NS_DESIGNATED_INITIALIZER;

/*! @brief Creates a token request suitable for exchanging an authorization code for an access
        token.
    @return A @c OIDTokenRequest suitable for exchanging an authorization code for an access
        token.
    @see https://tools.ietf.org/html/rfc6749#section-4.1.3
 */
- (nullable OIDTokenRequest *)tokenExchangeRequest;

/*! @brief Creates a token request suitable for exchanging an authorization code for an access
        token.
    @param additionalParameters Additional parameters for the token request.
    @return A @c OIDTokenRequest suitable for exchanging an authorization code for an access
        token.
    @see https://tools.ietf.org/html/rfc6749#section-4.1.3
 */
- (nullable OIDTokenRequest *)tokenExchangeRequestWithAdditionalParameters:
    (nullable NSDictionary<NSString *, NSString *> *)additionalParameters;

/*! @brief Creates a token request suitable for exchanging an authorization code for an access
        token.
    @param additionalParameters Additional parameters for the token request.
    @param additionalHeaders Additional headers for the token request.
    @return A @c OIDTokenRequest suitable for exchanging an authorization code for an access
        token.
    @see https://tools.ietf.org/html/rfc6749#section-4.1.3
 */
- (nullable OIDTokenRequest *)tokenExchangeRequestWithAdditionalParameters:
    (nullable NSDictionary<NSString *, NSString *> *)additionalParameters
                                                         additionalHeaders:
    (nullable NSDictionary<NSString *, NSString *> *)additionalHeaders;

@end

NS_ASSUME_NONNULL_END
