#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
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
        struct CDOTA_BaseNPC;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f28
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hIllusionOwner"
        // static metadata: MNetworkVarNames "bool m_bIllusionHasTree"
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Tiny : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            // m_hTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTreeWearable;
            char m_hTreeWearable[0x4]; // 0x1f18            
            source2sdk::client::ParticleIndex_t m_nFXIndexScepterAmbient; // 0x1f1c            
            // metadata: MNetworkEnable
            // m_hIllusionOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hIllusionOwner;
            char m_hIllusionOwner[0x4]; // 0x1f20            
            // metadata: MNetworkEnable
            bool m_bIllusionHasTree; // 0x1f24            
            uint8_t _pad1f25[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Tiny because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Tiny) == 0x1f28);
    };
};
