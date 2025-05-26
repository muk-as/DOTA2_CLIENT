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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lich_Chain_Frost_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nDamageToHeroes; // 0x1878            
            std::int32_t m_nHeroesKilled; // 0x187c            
            std::int32_t m_nJumps; // 0x1880            
            bool m_bFirstJump; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1888            
            // m_hAvoidTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAvoidTarget;
            char m_hAvoidTarget[0x4]; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Chain_Frost_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lich_Chain_Frost_Thinker) == 0x1890);
    };
};
