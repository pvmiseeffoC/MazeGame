#pragma once
#include "MapSite.h"

class MazeBuilder;

class Door : public MapSite
{
public:
  Door(MapSite* from, MapSite* to);

  virtual void enter() override;

  virtual void open();

  bool opened() const { return isOpen; }

  virtual SiteType type() override { return SiteType::Door; }

  void setBuilder(MazeBuilder* b);

  MapSite*& currentSideOfDoor();
  MapSite*& otherSideOfDoor();

private:
  MapSite* current;
  MapSite* other;
  bool isOpen = false;
};
