#ifndef TREEITEMROOT_H
#define TREEITEMROOT_H

#include "treeitem.h"
#include "basetypes.h"
#include <QList>
class TreeModel;

class TreeItemRoot: public TreeItem
{
public:
    TreeItemRoot(EltID id);
    virtual ~TreeItemRoot() override {}

    int childCount() const override;
    TreeItem * child(int row) override;
    QString display() override;
    int row() override;
    int indexOfId(int id) override; // Here, id is the type element

    int addChild(TreeItem * treeItem);
    void removeChild(TreeItem * treeItem);
    void attachModel(TreeModel * model) { this->_model = model; }

private:
    QList<TreeItem * > _children;
};

#endif // TREEITEMROOT_H
