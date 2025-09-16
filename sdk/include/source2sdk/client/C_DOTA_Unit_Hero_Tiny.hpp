#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        struct C_DOTA_BaseNPC;
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
        // Size: 0x1de8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hIllusionOwner"
        // static metadata: MNetworkVarNames "bool m_bIllusionHasTree"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Tiny : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            // m_hTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTreeWearable;
            char m_hTreeWearable[0x4]; // 0x1dd8            
            source2sdk::client::ParticleIndex_t m_nFXIndexScepterAmbient; // 0x1ddc            
            // metadata: MNetworkEnable
            // m_hIllusionOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hIllusionOwner;
            char m_hIllusionOwner[0x4]; // 0x1de0            
            // metadata: MNetworkEnable
            bool m_bIllusionHasTree; // 0x1de4            
            uint8_t _pad1de5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Tiny because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Tiny) == 0x1de8);
    };
};
