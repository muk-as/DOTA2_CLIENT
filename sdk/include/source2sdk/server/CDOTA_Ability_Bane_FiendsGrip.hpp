#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hGripTarget"
        #pragma pack(push, 1)
        class CDOTA_Ability_Bane_FiendsGrip : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hGripTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGripTarget;
            char m_hGripTarget[0x4]; // 0x5c0            
            std::int32_t fiend_grip_damage; // 0x5c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Bane_FiendsGrip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Bane_FiendsGrip) == 0x5c8);
    };
};
