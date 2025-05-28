#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Centaur_Cart : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hUnit;
            char m_hUnit[0x4]; // 0x1888            
            bool m_bWasMoving; // 0x188c            
            bool m_bSpawnDone; // 0x188d            
            uint8_t _pad188e[0x2]; // 0x188e
            Vector m_vecOldForward; // 0x1890            
            std::int32_t break_distance; // 0x189c            
            Vector m_vecPreviousLocation; // 0x18a0            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Cart because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Centaur_Cart) == 0x18b0);
    };
};
