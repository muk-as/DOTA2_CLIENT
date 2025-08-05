#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
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
        // Size: 0xa28
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkVarNames "int m_iRuneType"
        // static metadata: MNetworkVarNames "float m_flRuneTime"
        // static metadata: MNetworkVarNames "int m_nMapLocationTeam"
        // static metadata: MNetworkVarNames "char m_szLocation"
        #pragma pack(push, 1)
        class CDOTA_Item_Rune : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0800[0x18]; // 0x800
            // m_hRuneSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRuneSpawner;
            char m_hRuneSpawner[0x4]; // 0x818            
            // metadata: MNetworkEnable
            std::int32_t m_iRuneType; // 0x81c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "4"
            float m_flRuneTime; // 0x820            
            // metadata: MNetworkEnable
            std::int32_t m_nMapLocationTeam; // 0x824            
            // metadata: MNetworkEnable
            char m_szLocation[512]; // 0x828            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Rune because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Rune) == 0xa28);
    };
};
