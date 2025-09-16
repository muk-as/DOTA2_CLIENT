#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Tower.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_SDKTower : public source2sdk::server::CDOTA_BaseNPC_Tower
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_SDKTower) == 0x1a30);
    };
};
