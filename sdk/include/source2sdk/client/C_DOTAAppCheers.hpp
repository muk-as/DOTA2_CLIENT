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
    // Size: 0x578
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
        int16_t m_nRadiantCheers; // 0x560        
        // metadata: MNetworkEnable
        int16_t m_nRadiantBronzeCheers; // 0x562        
        // metadata: MNetworkEnable
        int16_t m_nRadiantSilverCheers; // 0x564        
        // metadata: MNetworkEnable
        int16_t m_nRadiantGoldCheers; // 0x566        
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nRadiantCrowdLevel; // 0x568        
        // metadata: MNetworkEnable
        int16_t m_nDireCheers; // 0x56c        
        // metadata: MNetworkEnable
        int16_t m_nDireBronzeCheers; // 0x56e        
        // metadata: MNetworkEnable
        int16_t m_nDireSilverCheers; // 0x570        
        // metadata: MNetworkEnable
        int16_t m_nDireGoldCheers; // 0x572        
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nDireCrowdLevel; // 0x574        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAAppCheers because it is not a standard-layout class
    static_assert(sizeof(C_DOTAAppCheers) == 0x578);
};
