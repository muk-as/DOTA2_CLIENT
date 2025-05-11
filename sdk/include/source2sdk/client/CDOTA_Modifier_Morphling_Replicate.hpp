#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_EconItemView;
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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_Replicate : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTinyTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTinyTreeWearable;
            char m_hTinyTreeWearable[0x4]; // 0x17f8            
            float m_flBaseAttackRange; // 0x17fc            
            float m_flBaseMovementSpeed; // 0x1800            
            uint8_t _pad1804[0x4]; // 0x1804
            CUtlSymbolLarge m_iszModelName; // 0x1808            
            CUtlSymbolLarge m_iszProjectileName; // 0x1810            
            source2sdk::client::HeroFacetKey_t m_nFacetKey; // 0x1818            
            CUtlSymbolLarge m_iszOriginalModel; // 0x1820            
            source2sdk::client::HeroID_t m_nCopiedHeroID; // 0x1828            
            float m_fOriginalModelScale; // 0x182c            
            // m_vecOriginalItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconItemView*> m_vecOriginalItems;
            char m_vecOriginalItems[0x18]; // 0x1830            
            uint8_t _pad1848[0x30]; // 0x1848
            float m_flOriginalStr; // 0x1878            
            float m_flOriginalAgi; // 0x187c            
            float m_flOriginalInt; // 0x1880            
            std::int32_t m_iOriginalAttackCapability; // 0x1884            
            float m_flOriginalHealthPercentage; // 0x1888            
            float m_flOriginalManaPercentage; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Replicate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Morphling_Replicate) == 0x1890);
    };
};
