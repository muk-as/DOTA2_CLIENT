#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Hero;
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
        // Size: 0x808
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByName "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        #pragma pack(push, 1)
        class CDOTA_Pet_CarriedItem : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            // m_hHeroHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hHeroHandle;
            char m_hHeroHandle[0x4]; // 0x800            
            uint8_t _pad0804[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Pet_CarriedItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Pet_CarriedItem) == 0x808);
    };
};
