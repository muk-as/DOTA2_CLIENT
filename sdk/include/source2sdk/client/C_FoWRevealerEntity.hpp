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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_FoWRevealerEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            std::uint32_t m_unViewerTeam; // 0x_            
            std::int32_t m_nVisionRange; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FoWRevealerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FoWRevealerEntity) == 0x_);
    };
};
