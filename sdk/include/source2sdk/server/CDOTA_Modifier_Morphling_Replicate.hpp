#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CEconItemView;
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
        // Size: 0x1920
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_Replicate : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTinyTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTinyTreeWearable;
            char m_hTinyTreeWearable[0x4]; // 0x1888            
            float m_flBaseAttackRange; // 0x188c            
            float m_flBaseMovementSpeed; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            CUtlSymbolLarge m_iszModelName; // 0x1898            
            CUtlSymbolLarge m_iszProjectileName; // 0x18a0            
            source2sdk::client::HeroFacetKey_t m_nFacetKey; // 0x18a8            
            CUtlSymbolLarge m_iszOriginalModel; // 0x18b0            
            source2sdk::client::HeroID_t m_nCopiedHeroID; // 0x18b8            
            float m_fOriginalModelScale; // 0x18bc            
            // m_vecOriginalItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CEconItemView*> m_vecOriginalItems;
            char m_vecOriginalItems[0x18]; // 0x18c0            
            uint8_t _pad18d8[0x30]; // 0x18d8
            float m_flOriginalStr; // 0x1908            
            float m_flOriginalAgi; // 0x190c            
            float m_flOriginalInt; // 0x1910            
            std::int32_t m_iOriginalAttackCapability; // 0x1914            
            float m_flOriginalHealthPercentage; // 0x1918            
            float m_flOriginalManaPercentage; // 0x191c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Replicate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Morphling_Replicate) == 0x1920);
    };
};
