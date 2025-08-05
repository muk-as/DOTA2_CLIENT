#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace particleslib
    {
        struct CNewParticleEffect;
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
        // Size: 0x1ab0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "string_t m_szInteractAbilityName"
        #pragma pack(push, 1)
        class C_DOTA_NPC_Lantern : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szInteractAbilityName; // 0x1a88            
            source2sdk::particleslib::CNewParticleEffect* m_pVisionRangeFX; // 0x1a90            
            std::int32_t m_nPreviewViewer; // 0x1a98            
            source2sdk::client::ParticleIndex_t m_iFxIndex; // 0x1a9c            
            std::int32_t m_nCurrentOwningTeam; // 0x1aa0            
            std::int32_t m_nCurrentActivity; // 0x1aa4            
            bool m_bCanBeCaptured; // 0x1aa8            
            uint8_t _pad1aa9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_NPC_Lantern because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_NPC_Lantern) == 0x1ab0);
    };
};
