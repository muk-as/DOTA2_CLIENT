#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/TempViewerInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "uint32 m_FoWTempViewerVersion"
        // static metadata: MNetworkVarNames "TempViewerInfo_t m_TempViewerInfo"
        #pragma pack(push, 1)
        class CDOTAFogOfWarTempViewers : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_FoWTempViewerVersion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_TempViewerInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TempViewerInfo_t> m_TempViewerInfo;
            char m_TempViewerInfo[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flEndTimeMin; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAFogOfWarTempViewers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAFogOfWarTempViewers) == 0x_);
    };
};
