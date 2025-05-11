#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Leshrac_Diabolic_Edict : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t num_explosions; // 0x17f8            
            float radius; // 0x17fc            
            float m_fExplosions; // 0x1800            
            float tower_bonus; // 0x1804            
            std::int32_t affects_buildings; // 0x1808            
            std::int32_t damage; // 0x180c            
            std::int32_t targets; // 0x1810            
            std::int32_t iDamageType; // 0x1814            
            bool m_bTalentActive; // 0x1818            
            uint8_t _pad1819[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Diabolic_Edict because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Leshrac_Diabolic_Edict) == 0x1828);
    };
};
