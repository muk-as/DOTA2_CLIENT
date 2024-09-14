#pragma once
#include "source2sdk/client/ECrowdLevel.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x568
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int16 m_nRadiantCheers"
    // static metadata: MNetworkVarNames "int16 m_nRadiantBronzeCheers"
    // static metadata: MNetworkVarNames "int16 m_nRadiantSilverCheers"
    // static metadata: MNetworkVarNames "int16 m_nRadiantGoldCheers"
    // static metadata: MNetworkVarNames "ECrowdLevel m_nRadiantCrowdLevel"
    // static metadata: MNetworkVarNames "int16 m_nDireCheers"
    // static metadata: MNetworkVarNames "int16 m_nDireBronzeCheers"
    // static metadata: MNetworkVarNames "int16 m_nDireSilverCheers"
    // static metadata: MNetworkVarNames "int16 m_nDireGoldCheers"
    // static metadata: MNetworkVarNames "ECrowdLevel m_nDireCrowdLevel"
    #pragma pack(push, 1)
    class CDOTAAppCheers : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x96]; // 0x4b8
        // metadata: MNetworkEnable
        int16_t m_nRadiantCheers; // 0x54e        
        // metadata: MNetworkEnable
        int16_t m_nRadiantBronzeCheers; // 0x550        
        // metadata: MNetworkEnable
        int16_t m_nRadiantSilverCheers; // 0x552        
        // metadata: MNetworkEnable
        int16_t m_nRadiantGoldCheers; // 0x554        
        [[maybe_unused]] std::uint8_t pad_0x556[0x2]; // 0x556
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nRadiantCrowdLevel; // 0x558        
        // metadata: MNetworkEnable
        int16_t m_nDireCheers; // 0x55c        
        // metadata: MNetworkEnable
        int16_t m_nDireBronzeCheers; // 0x55e        
        // metadata: MNetworkEnable
        int16_t m_nDireSilverCheers; // 0x560        
        // metadata: MNetworkEnable
        int16_t m_nDireGoldCheers; // 0x562        
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nDireCrowdLevel; // 0x564        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAAppCheers because it is not a standard-layout class
    static_assert(sizeof(CDOTAAppCheers) == 0x568);
};
