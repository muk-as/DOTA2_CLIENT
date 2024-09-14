#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ECrowdLevel.hpp"
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
    // Size: 0x550
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
    class C_DOTAAppCheers : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int16_t m_nRadiantCheers; // 0x538        
        // metadata: MNetworkEnable
        int16_t m_nRadiantBronzeCheers; // 0x53a        
        // metadata: MNetworkEnable
        int16_t m_nRadiantSilverCheers; // 0x53c        
        // metadata: MNetworkEnable
        int16_t m_nRadiantGoldCheers; // 0x53e        
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nRadiantCrowdLevel; // 0x540        
        // metadata: MNetworkEnable
        int16_t m_nDireCheers; // 0x544        
        // metadata: MNetworkEnable
        int16_t m_nDireBronzeCheers; // 0x546        
        // metadata: MNetworkEnable
        int16_t m_nDireSilverCheers; // 0x548        
        // metadata: MNetworkEnable
        int16_t m_nDireGoldCheers; // 0x54a        
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nDireCrowdLevel; // 0x54c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAAppCheers because it is not a standard-layout class
    static_assert(sizeof(C_DOTAAppCheers) == 0x550);
};
