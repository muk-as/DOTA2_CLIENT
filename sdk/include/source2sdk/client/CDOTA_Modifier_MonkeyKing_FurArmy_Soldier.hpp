#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vTargetPos; // 0x1878            
            Vector m_vDirection; // 0x1884            
            std::int32_t move_speed; // 0x1890            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x1894            
            bool m_bIsInPosition; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x189c            
            bool m_bAutoSpawn; // 0x18a0            
            uint8_t _pad18a1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmy_Soldier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_FurArmy_Soldier) == 0x18a8);
    };
};
