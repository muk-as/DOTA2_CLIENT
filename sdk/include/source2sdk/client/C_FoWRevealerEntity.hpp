#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_FoWRevealerEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            std::uint32_t m_unViewerTeam; // 0x5e8            
            std::int32_t m_nVisionRange; // 0x5ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FoWRevealerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FoWRevealerEntity) == 0x5f0);
    };
};
