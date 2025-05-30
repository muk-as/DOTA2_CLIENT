#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x748
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_DrowRanger_Multishot : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x680            
            std::int32_t m_iArrowProjectile; // 0x68c            
            std::int32_t m_nFXIndex; // 0x690            
            float arrow_speed; // 0x694            
            std::int32_t arrow_spread; // 0x698            
            uint8_t _pad069c[0x4]; // 0x69c
            // m_vHitTargets0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitTargets0;
            char m_vHitTargets0[0x18]; // 0x6a0            
            // m_vHitTargets1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitTargets1;
            char m_vHitTargets1[0x18]; // 0x6b8            
            // m_vHitTargets2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitTargets2;
            char m_vHitTargets2[0x18]; // 0x6d0            
            // m_vHitTargets3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitTargets3;
            char m_vHitTargets3[0x18]; // 0x6e8            
            // m_vHitTargets4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitTargets4;
            char m_vHitTargets4[0x18]; // 0x700            
            // m_vHitTargets5 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitTargets5;
            char m_vHitTargets5[0x18]; // 0x718            
            // m_vHitTargets6 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitTargets6;
            char m_vHitTargets6[0x18]; // 0x730            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_DrowRanger_Multishot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_DrowRanger_Multishot) == 0x748);
    };
};
