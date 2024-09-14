#pragma once
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1810
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_angRotation"
    // static metadata: MNetworkIncludeByName "m_angRotation[0]"
    // static metadata: MNetworkIncludeByName "m_angRotation[1]"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_RotatableBuilding : public server::CDOTA_BaseNPC
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_BaseNPC_RotatableBuilding) == 0x1810);
};
