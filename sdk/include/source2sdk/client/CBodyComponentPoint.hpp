#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBodyComponent.hpp"
#include "source2sdk/client/CGameSceneNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1e0
        // Has VTable
        // Construct disallowed
        // 
        // static metadata: MNetworkVarNames "CGameSceneNode m_sceneNode"
        #pragma pack(push, 1)
        class CBodyComponentPoint : public source2sdk::client::CBodyComponent
        {
        public:
            uint8_t _pad0078[0x8]; // 0x78
            // metadata: MNetworkEnable
            source2sdk::client::CGameSceneNode m_sceneNode; // 0x80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponentPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBodyComponentPoint) == 0x1e0);
    };
};
