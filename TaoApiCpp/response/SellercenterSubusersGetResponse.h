#ifndef SELLERCENTERSUBUSERSGETRESPONSE_H
#define SELLERCENTERSUBUSERSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/SubUserInfo.h>


/**
 * @brief TOP RESPONSE API: 根据主账号nick查询该账号下所有的子账号列表，只能查询属于自己的账号信息 (主账号以及所属子账号)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterSubusersGetResponse : public TaoResponse
{
public:
 virtual ~SellercenterSubusersGetResponse() { }

  QList<SubUserInfo> getSubusers() const;
  void setSubusers (QList<SubUserInfo> subusers);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 子账号基本信息列表。具体信息为id、子账号用户名、主账号id、主账号昵称、当前状态值、是否分流
 **/
  QList<SubUserInfo> subusers;

};

#endif
