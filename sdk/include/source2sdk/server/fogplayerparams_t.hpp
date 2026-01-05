#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CFogController;
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "CHandle< CFogController> m_hCtrl"
        #pragma pack(push, 1)
        struct fogplayerparams_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "PlayerFogController"
            // m_hCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFogController> m_hCtrl;
            char m_hCtrl[0x_]; // 0x_            
            float m_flTransitionTime; // 0x_            
            Color m_OldColor; // 0x_            
            float m_flOldStart; // 0x_            
            float m_flOldEnd; // 0x_            
            // metadata: MNotSaved
            float m_flOldMaxDensity; // 0x_            
            // metadata: MNotSaved
            float m_flOldHDRColorScale; // 0x_            
            // metadata: MNotSaved
            float m_flOldFarZ; // 0x_            
            Color m_NewColor; // 0x_            
            float m_flNewStart; // 0x_            
            float m_flNewEnd; // 0x_            
            // metadata: MNotSaved
            float m_flNewMaxDensity; // 0x_            
            // metadata: MNotSaved
            float m_flNewHDRColorScale; // 0x_            
            // metadata: MNotSaved
            float m_flNewFarZ; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_hCtrl) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flTransitionTime) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_OldColor) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flOldStart) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flOldEnd) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flOldMaxDensity) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flOldHDRColorScale) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flOldFarZ) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_NewColor) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flNewStart) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flNewEnd) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flNewMaxDensity) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flNewHDRColorScale) == 0x_);
        static_assert(offsetof(source2sdk::server::fogplayerparams_t, m_flNewFarZ) == 0x_);
        
        static_assert(sizeof(source2sdk::server::fogplayerparams_t) == 0x_);
    };
};
