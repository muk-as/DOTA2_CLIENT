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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Broodmother_SpinWeb : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hWebs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hWebs;
            char m_hWebs[0x18]; // 0x680            
            // m_hWebClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<CHandle<source2sdk::client::C_BaseEntity>>> m_hWebClusters;
            char m_hWebClusters[0x18]; // 0x698            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_SpinWeb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Broodmother_SpinWeb) == 0x6b0);
    };
};
