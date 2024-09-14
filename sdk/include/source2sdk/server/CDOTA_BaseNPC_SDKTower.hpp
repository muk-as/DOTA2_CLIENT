#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Tower.hpp"
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
    // Size: 0x1958
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_SDKTower : public server::CDOTA_BaseNPC_Tower
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_BaseNPC_SDKTower) == 0x1958);
};
