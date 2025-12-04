#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ECrowdLevel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
        class C_DOTAAppCheers : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantBronzeCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantSilverCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantGoldCheers; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nDireCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nDireBronzeCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nDireSilverCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nDireGoldCheers; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAAppCheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAAppCheers) == 0x_);
    };
};
