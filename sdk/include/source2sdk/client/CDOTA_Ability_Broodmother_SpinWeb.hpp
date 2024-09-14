#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Broodmother_SpinWeb : public client::C_DOTABaseAbility
    {
    public:
        // m_hWebs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hWebs;
        char m_hWebs[0x18]; // 0x5d8        
        // m_hWebClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlVector<CHandle<client::C_BaseEntity>>> m_hWebClusters;
        char m_hWebClusters[0x18]; // 0x5f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_SpinWeb because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Broodmother_SpinWeb) == 0x608);
};
