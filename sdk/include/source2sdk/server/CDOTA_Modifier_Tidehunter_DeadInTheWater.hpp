#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tidehunter_DeadInTheWater : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_movement_speed; // 0x1878            
            std::int32_t chain_length; // 0x187c            
            // m_hAnchor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnchor;
            char m_hAnchor[0x4]; // 0x1880            
            bool m_bDragging; // 0x1884            
            uint8_t _pad1885[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_DeadInTheWater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tidehunter_DeadInTheWater) == 0x1888);
    };
};
