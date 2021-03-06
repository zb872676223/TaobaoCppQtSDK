#include <TaoApiCpp/response/TaobaokeItemsGetResponse.h>

QList<TaobaokeItem> TaobaokeItemsGetResponse::getTaobaokeItems() const {
  return taobaokeItems;
}
void TaobaokeItemsGetResponse::setTaobaokeItems (QList<TaobaokeItem> taobaokeItems) {
  this->taobaokeItems = taobaokeItems;
}
qlonglong TaobaokeItemsGetResponse::getTotalResults() const {
  return totalResults;
}
void TaobaokeItemsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void TaobaokeItemsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_items")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("taobaoke_items");
  Parser *parser;
  foreach (parser, listParser) {
    TaobaokeItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    taobaokeItems.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

