#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint32 m_bvDisabledHitGroups"
        #pragma pack(push, 1)
        class CHitboxComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x1c]; // 0x8
            // metadata: MNetworkEnable
            std::uint32_t m_bvDisabledHitGroups[1]; // 0x24            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHitboxComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CHitboxComponent) == 0x28);
    };
};
