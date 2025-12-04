#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iLastKillerTeam"
        // static metadata: MNetworkVarNames "int m_iKillCount"
        // static metadata: MNetworkVarNames "Vector m_vRoshanAltLocation"
        // static metadata: MNetworkVarNames "EHANDLE m_hRoshan"
        #pragma pack(push, 1)
        class C_DOTA_RoshanSpawner : public source2sdk::client::C_PointEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iLastKillerTeam; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iKillCount; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vRoshanAltLocation; // 0x_            
            // metadata: MNetworkEnable
            // m_hRoshan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRoshan;
            char m_hRoshan[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_RoshanSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_RoshanSpawner) == 0x_);
    };
};
