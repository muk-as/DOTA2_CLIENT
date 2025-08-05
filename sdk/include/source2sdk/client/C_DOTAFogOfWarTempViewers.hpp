#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/TempViewerInfo_t.hpp"

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
        // Size: 0x660
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "uint32 m_FoWTempViewerVersion"
        // static metadata: MNetworkVarNames "TempViewerInfo_t m_TempViewerInfo"
        #pragma pack(push, 1)
        class C_DOTAFogOfWarTempViewers : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_FoWTempViewerVersion; // 0x5e8            
            uint8_t _pad05ec[0x4]; // 0x5ec
            // metadata: MNetworkEnable
            // m_TempViewerInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::TempViewerInfo_t> m_TempViewerInfo;
            char m_TempViewerInfo[0x68]; // 0x5f0            
            std::int32_t m_dota_spectator_fog_of_war_last; // 0x658            
            std::uint32_t m_unLastFogOfWarTeam; // 0x65c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAFogOfWarTempViewers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAFogOfWarTempViewers) == 0x660);
    };
};
