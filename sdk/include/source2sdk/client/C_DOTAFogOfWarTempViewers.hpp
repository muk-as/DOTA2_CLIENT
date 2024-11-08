#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/TempViewerInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "uint32 m_FoWTempViewerVersion"
    // static metadata: MNetworkVarNames "TempViewerInfo_t m_TempViewerInfo"
    #pragma pack(push, 1)
    class C_DOTAFogOfWarTempViewers : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_FoWTempViewerVersion; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x564[0x4]; // 0x564
        // metadata: MNetworkEnable
        // m_TempViewerInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::TempViewerInfo_t> m_TempViewerInfo;
        char m_TempViewerInfo[0x68]; // 0x568        
        int32_t m_dota_spectator_fog_of_war_last; // 0x5d0        
        uint32_t m_unLastFogOfWarTeam; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAFogOfWarTempViewers because it is not a standard-layout class
    static_assert(sizeof(C_DOTAFogOfWarTempViewers) == 0x5d8);
};
