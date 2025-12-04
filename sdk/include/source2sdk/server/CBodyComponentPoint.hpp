#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBodyComponent.hpp"
#include "source2sdk/server/CGameSceneNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct disallowed
        // 
        // static metadata: MNetworkVarNames "CGameSceneNode m_sceneNode"
        #pragma pack(push, 1)
        class CBodyComponentPoint : public source2sdk::server::CBodyComponent
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::server::CGameSceneNode m_sceneNode; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponentPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBodyComponentPoint) == 0x_);
    };
};
