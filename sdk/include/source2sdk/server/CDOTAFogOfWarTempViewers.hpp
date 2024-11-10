#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/TempViewerInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x578
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "uint32 m_FoWTempViewerVersion"
    // static metadata: MNetworkVarNames "TempViewerInfo_t m_TempViewerInfo"
    #pragma pack(push, 1)
    class CDOTAFogOfWarTempViewers : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_FoWTempViewerVersion; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4]; // 0x4e4
        // metadata: MNetworkEnable
        // m_TempViewerInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::TempViewerInfo_t> m_TempViewerInfo;
        char m_TempViewerInfo[0x68]; // 0x4e8        
        entity2::GameTime_t m_flEndTimeMin; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x554[0x24];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAFogOfWarTempViewers because it is not a standard-layout class
    static_assert(sizeof(CDOTAFogOfWarTempViewers) == 0x578);
};
