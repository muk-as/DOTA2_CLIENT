#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECrowdLevel.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x588
        // Has VTable
        // Construct allowed
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
        class CDOTAAppCheers : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04d8[0x96]; // 0x4d8
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantCheers; // 0x56e            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantBronzeCheers; // 0x570            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantSilverCheers; // 0x572            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantGoldCheers; // 0x574            
            uint8_t _pad0576[0x2]; // 0x576
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x578            
            // metadata: MNetworkEnable
            std::int16_t m_nDireCheers; // 0x57c            
            // metadata: MNetworkEnable
            std::int16_t m_nDireBronzeCheers; // 0x57e            
            // metadata: MNetworkEnable
            std::int16_t m_nDireSilverCheers; // 0x580            
            // metadata: MNetworkEnable
            std::int16_t m_nDireGoldCheers; // 0x582            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x584            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAAppCheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAAppCheers) == 0x588);
    };
};
