#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Broodmother_SpinWeb : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hWebs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWebs;
            char m_hWebs[0x18]; // 0x5c0            
            // m_hWebClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<CHandle<source2sdk::server::CBaseEntity>>> m_hWebClusters;
            char m_hWebClusters[0x18]; // 0x5d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_SpinWeb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Broodmother_SpinWeb) == 0x5f0);
    };
};
