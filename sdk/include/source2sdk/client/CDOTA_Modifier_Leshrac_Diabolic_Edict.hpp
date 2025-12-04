#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Leshrac_Diabolic_Edict : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t num_explosions; // 0x_            
            float radius; // 0x_            
            float m_fExplosions; // 0x_            
            float tower_bonus; // 0x_            
            std::int32_t affects_buildings; // 0x_            
            std::int32_t damage; // 0x_            
            std::int32_t targets; // 0x_            
            std::int32_t iDamageType; // 0x_            
            bool m_bTalentActive; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Diabolic_Edict because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Leshrac_Diabolic_Edict) == 0x_);
    };
};
