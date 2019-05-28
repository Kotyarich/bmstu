#ifndef PITCH_CAMERA_COMMAND_H
#define PITCH_CAMERA_COMMAND_H

#include "basecommand.h"
#include "intermediary/intermediary.h"

namespace commands {

class PitchCameraCommand: public BaseCommand {
public:
    PitchCameraCommand(std::string object_name, double angle);
    void execute(std::shared_ptr<Intermediary> intermediary) override;
private:
    std::string _object_name;
    double _angle;
};

} // namespace commands

#endif // PITCH_CAMERA_COMMAND_H
